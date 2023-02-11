/**
 * @brief Implements tests verifying the experimental results from LaValle (1998).
 */

#include <catch2/catch_test_macros.hpp>

/**
 * @brief The RRT shall rapidly explore in all directions on the 2D plane.
 * 
 * @details The original work used a 100 m by 100 m plane and the Euclidean metric.
 */
TEST_CASE( "RRT rapidly explores the 2D plane", "[RRT][experiment]" )
{
    REQUIRE( false ); // TODO
}

/**
 * @brief The RRT-found path shall differ from the optimal path by a factor of 1.3 to 2.0.
 * 
 * @details The original work specifies this finding for 2D, convex spaces.
 */
TEST_CASE( "RRT path differs from optimal by factor of 1.3 to 2.0", "[RRT][experiment]" )
{
    REQUIRE( false ); // TODO
}

/**
 * @brief The RRT shall sample vertices uniformly.
 * 
 * @details The original work confirms this result using several Chi-square tests.
 */
TEST_CASE( "RRT samples vertices uniformly", "[RRT][experiment]" )
{
    REQUIRE( false ); // TODO
}

/**
 * @brief The RRT shall plan motions for a 3D holonomic problem fitting a block through a gap.
 * 
 * @details The original work seems to sample many possible angles but moves over an 8-connected grid.
 */
TEST_CASE( "RRT fits a 3D holonomic block through a narrow gap", "[RRT][experiment]" )
{
    REQUIRE( false ); // TODO
}

/**
 * @brief The RRT shall plan motions for a car that can only turn tight and move forward.
 * 
 * @details The original work does not illustrate obstacles in this experiment.
 */
TEST_CASE( "RRT plans for a car that can't turn left or slow down", "[RRT][experiment]" )
{
    REQUIRE( false ); // TODO
}

/**
 * @brief The RRT shall plan motions for an uncontrollable car in a cluttered environment.
 * 
 * @details 6. [RRT-EX-6] Motion planning in a cluttered environment for a car that can only move forward and turn left in three different increments.

*/
TEST_CASE( "RRT plans for an uncontrollable car in cluttered environments", "[RRT][experiment]" )
{
    REQUIRE( false ); // TODO
}

/**
 * @brief The RRT shall plan motions for a kinodynamic car in a cluttered environment.
 * 
 * @details In the original work, the caption on Figure 1 reveals that this RRT was 5D.

*/
TEST_CASE( "RRT plans for a kinodynamic car in cluttered environments", "[RRT][experiment]" )
{
    REQUIRE( false ); // TODO
}