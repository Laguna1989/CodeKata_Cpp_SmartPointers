#include "../AwefulApi/AwefulAPI.h"
#include "../src/Galaxy.h"
#include "../src/Ship.h"
#include "../src/System.h"
#include <gtest/gtest.h>
#include <memory>

class GalaxyTextFixture : public ::testing::TestWithParam<std::size_t> {
};

TEST_P(GalaxyTextFixture, GalaxyContainsExpectedNumberOfSystems)
{
    std::size_t const expected_systems = GetParam();
    Galaxy const g(expected_systems);

    EXPECT_EQ(g.get_system_count(), expected_systems);
}

TEST_P(GalaxyTextFixture, GalaxyWithoutShipsContainsCorrectMass)
{
    std::size_t const expected_systems = GetParam();
    Galaxy const g(expected_systems);

    EXPECT_EQ(g.total_mass(), 2.0f * expected_systems);
}

TEST(GalaxyTest, GalaxyWithShipsContainsCorrectMass)
{
    std::size_t const expected_systems = 5;
    Galaxy g(expected_systems);

    g.add_ship_to_system(1);
    g.add_ship_to_system(2);

    EXPECT_EQ(g.total_mass(), 2.0f * expected_systems + 0.5f);
}

INSTANTIATE_TEST_CASE_P(GalaxyText, GalaxyTextFixture, ::testing::Values(0, 1, 100));

TEST(GalaxyTest, AdmireGalaxyDoesNotAbort)
{
    Galaxy const g { 0 };
    g.admire_galaxy_picture();
}

TEST(SpriteTest, CorrectUseDoesNotAbort)
{
    AwefulApi::Sprite* sprite = AwefulApi::createSprite();
    sprite->look_at();
    AwefulApi::destroySprite(sprite);
    SUCCEED();
}

TEST(SpriteTest, IncorrectCreationCausesProgramAbortion)
{
    auto const func = []() {
        AwefulApi::Sprite s {};
        s.look_at();
    };
    EXPECT_DEATH(func(), "");
}

TEST(SpriteTest, IncorrectDestructionCausesProgramAbortion)
{
    auto const func = []() {
        AwefulApi::Sprite* sprite = AwefulApi::createSprite();
        delete (sprite);
    };
    EXPECT_DEATH(func(), "");
}

TEST(ShipTest, NavigateDoesNotTerminate)
{
    System s {};
    s.add_ship();
    s.add_ship();
    s.update_ship_positions();
}
