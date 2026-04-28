#ifndef ABLATION_CONFIG_H
#define ABLATION_CONFIG_H

// Compile-time ablation switches for FAST-LIVO2 improvements.
// Define these macros (e.g. via CMake -D) to ENABLE each modification.
// When undefined, the original code path is used.

// --- Phase 1: Bug Fixes & Low-Risk Optimizations ---
// #define ENABLE_BUG1   // blind_sqr initialization fix
// #define ENABLE_BUG2   // disA/disB duplicate assignment fix
// #define ENABLE_BUG3   // IMU bias covariance configurable
// #define ENABLE_OPT2   // transformLidar precomputed rotation
// #define ENABLE_OPT3   // SelfAdjointEigenSolver in init_plane
// #define ENABLE_OPT4   // static TransformBroadcaster
// #define ENABLE_OPT5   // IMUpose.reserve(50)

// --- Phase 2: Accuracy Improvements ---
// #define ENABLE_ACC1   // Huber robust loss in VIO
// #define ENABLE_ACC2   // Rotation re-orthogonalization after LIO EKF
// #define ENABLE_ACC3   // calcBodyCov singularity fix
// #define ENABLE_ACC5   // Scale-adaptive regularization
// #define ENABLE_ACC6   // Initial EKF covariance tuning
// #define ENABLE_ACC7   // Configurable gravity constant

// --- Phase 3: Efficiency Improvements ---
// #define ENABLE_EFF1   // Remove unnecessary mutex in BuildResidualListOMP
// #define ENABLE_EFF3   // Hoisted matrix computations (3a, 3b, 3c)

// --- Phase 4: Robustness Improvements ---
// #define ENABLE_ROB1   // VIO tracking failure detection
// #define ENABLE_ROB3   // LIO degeneration detection
// #define ENABLE_ROB5   // IMU dt guard

// --- Phase 5: Map Quality ---
// #define ENABLE_MAP2   // Exposure compensation in RGB coloring
// #define ENABLE_MAP3   // NaN for out-of-bounds warped pixels

#endif // ABLATION_CONFIG_H
