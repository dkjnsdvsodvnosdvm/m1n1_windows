/* SPDX-License-Identifier: MIT */

#ifndef CONFIG_H
#define CONFIG_H

// Enable framebuffer console
#define USE_FB
// Disable framebuffer console unless verbose boot is enabled
//#define FB_SILENT_MODE
// Initialize USB early and break into proxy if device is opened within this time (sec)
//#define EARLY_PROXY_TIMEOUT 5

// Minimal build for bring-up
//#define BRINGUP

// Print RTKit logs to the console
//#define RTKIT_SYSLOG

// Target for device-specific debug builds
//#define TARGET T8103

// Enable SMMU abstraction layer to expose a fake SMMU to the guest which will redirect writes to the host IOMMU in a compatible manner
// #define ENABLE_SMMU

//
// Use PSCI to turn on the CPUs in earnest rather than just setting up the spintables that m1n1 uses.
//
// #define PSCI_POWER_ON_CPUS_ENABLE

#ifdef RELEASE
# define FB_SILENT_MODE
# ifdef CHAINLOADING
#  define EARLY_PROXY_TIMEOUT 5
# endif
#endif

#endif
