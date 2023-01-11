#include "ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8.h"
#include "ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1.h"

typedef union ffx_fsr2_rcas_pass_16bit_PermutationKey {
    struct {
        uint32_t FFX_FSR2_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR2_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR2_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR2_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR2_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr2_rcas_pass_16bit_PermutationKey;

typedef struct ffx_fsr2_rcas_pass_16bit_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numCBVResources;
    const char**    cbvResourceNames;
    const uint32_t* cbvResourceBindings;
    const uint32_t* cbvResourceCounts;
    const uint32_t* cbvResourceSpaces;

    const uint32_t  numSRVResources;
    const char**    srvResourceNames;
    const uint32_t* srvResourceBindings;
    const uint32_t* srvResourceCounts;
    const uint32_t* srvResourceSpaces;

    const uint32_t  numUAVResources;
    const char**    uavResourceNames;
    const uint32_t* uavResourceBindings;
    const uint32_t* uavResourceCounts;
    const uint32_t* uavResourceSpaces;

    const uint32_t  numSamplerResources;
    const char**    samplerResourceNames;
    const uint32_t* samplerResourceBindings;
    const uint32_t* samplerResourceCounts;
    const uint32_t* samplerResourceSpaces;

    const uint32_t  numRTAccelerationStructureResources;
    const char**    rtAccelerationStructureResourceNames;
    const uint32_t* rtAccelerationStructureResourceBindings;
    const uint32_t* rtAccelerationStructureResourceCounts;
    const uint32_t* rtAccelerationStructureResourceSpaces;
} ffx_fsr2_rcas_pass_16bit_PermutationInfo;

static const uint32_t g_ffx_fsr2_rcas_pass_16bit_IndirectionTable[] = {
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    1,
    1,
};

static const ffx_fsr2_rcas_pass_16bit_PermutationInfo g_ffx_fsr2_rcas_pass_16bit_PermutationInfo[] = {
    { g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_size, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_data, 2, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_CBVResourceNames, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_CBVResourceBindings, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_CBVResourceCounts, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_CBVResourceSpaces, 2, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_SRVResourceNames, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_SRVResourceBindings, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_SRVResourceCounts, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_SRVResourceSpaces, 1, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_UAVResourceNames, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_UAVResourceBindings, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_UAVResourceCounts, g_ffx_fsr2_rcas_pass_16bit_44bc740c40910bc54fcd6d60921c45e8_UAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
    { g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_size, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_data, 2, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_CBVResourceNames, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_CBVResourceBindings, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_CBVResourceCounts, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_CBVResourceSpaces, 2, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_SRVResourceNames, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_SRVResourceBindings, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_SRVResourceCounts, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_SRVResourceSpaces, 1, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_UAVResourceNames, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_UAVResourceBindings, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_UAVResourceCounts, g_ffx_fsr2_rcas_pass_16bit_fb271dbdff7650ac26ddbef8369044e1_UAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },
};

