/**
 * @brief Implements tests verifying the experimental results from:
 *      Rapidly-exploring random trees: A new tool for path planning.
 *      S. M. LaValle. TR 98-11, Computer Science Dept., Iowa State University,
 *      October 1998, http://lavalle.pl/papers/Lav98c.pdf.
 */

#include <catch2/catch_test_macros.hpp>

/**
 * @brief The RRT rapidly explores in all directions on the 2D plane.
 * 
 * @details Experimental details from LaValle (1998):
 *  - A holonomic model is used, with actions U = { u in R2 s.t. |u| <= 1 }
 *  - Metric space is the bounded, convex 100 m by 100 m plane
 *  - Euclidean distance metric
 */
TEST_CASE( "RRT rapidly explores the 2D plane", "[RRT][experiment]" )
{
   REQUIRE( false );
}

/**
 * @brief RRT-found paths differ from optimal paths by a factor of 1.3 to 2.0.
 * 
 * @details Experimental details from LaValle (1998):
 *  - This finding occurred in 2D, convex spaces
 */
TEST_CASE( "RRT paths are longer than optimal paths", "[RRT][experiment]" )
{
   REQUIRE( false );
}

/**
 * @brief The RRT samples vertices uniformly.
 * 
 * @details Experimental details from LaValle (1998):
 *  - This result was confirmed using several Chi-square tests
 */
TEST_CASE( "RRT samples vertices uniformly", "[RRT][experiment]" )
{
   REQUIRE( false );
}

/**
 * @brief The RRT plans motions for a 3D holonomic problem fitting a block through a gap.
 * 
 * @details Experimental details from LaValle (1998):
 *  - This result is illustrated in the top left of the last figure
 *  - The block is a 2D rigid body in a 2D environment
 *  - The figure suggests that many possible angles are sampled
 *  - The figure suggests that locations are sampled from an 8-connected grid
 */
TEST_CASE( "RRT fits a 2D block through a narrow gap", "[RRT][experiment]" )
{
   REQUIRE( false );
}

/**
 * @brief The RRT plans motions for a car that can only turn right and move forward.
 * 
 * @details Experimental details from LaValle (1998):
 *  - This result is illustrated in the top right of the last figure
 *  - The figure does not show any obstacles in this experiment
 */
TEST_CASE( "RRT plans for an unstoppable, right-turn-only car", "[RRT][experiment]" )
{
   REQUIRE( false );
}

/**
 * @brief The RRT plans motions for an uncontrollable car in a cluttered environment.
 * 
 * @details Experimental details from LaValle (1998):
 *  - This result is illustrated in the bottom left of the last figure
 *  - The figure shows rectangular, triangular, and hexgonal static obstacles
 *  - The car can only move forward and turn left in three different increments
 *  - The car cannot move straight
 */
TEST_CASE( "RRT avoids obstacles with an uncontrollable car", "[RRT][experiment]" )
{
   REQUIRE( false );
}

/**
 * @brief The RRT plans motions for a kinodynamic car in a cluttered environment.
 * 
 * @details Experimental details from LaValle (1998):
 *  - This result is illustrated in Figure 1, and the bottom right of the last figure
 *  - The state space for the RRT is 5D, based on the caption for Figure 1
 *  - The latter figure (bottom right) shows overlapping rectangular obstacles
 */
TEST_CASE( "RRT avoids obstacles with a kinodynamic car", "[RRT][experiment]" )
{
   REQUIRE( false );
}