

/**************************************************************************************************
 *** This file was autogenerated from GrChildProcessorSampleMatrixConstantAndCoords.fp; do not modify.
 **************************************************************************************************/
#ifndef GrChildProcessorSampleMatrixConstantAndCoords_DEFINED
#define GrChildProcessorSampleMatrixConstantAndCoords_DEFINED

#include "include/core/SkM44.h"
#include "include/core/SkTypes.h"


#include "src/gpu/GrFragmentProcessor.h"

class GrChildProcessorSampleMatrixConstantAndCoords : public GrFragmentProcessor {
public:
    static std::unique_ptr<GrFragmentProcessor> Make(std::unique_ptr<GrFragmentProcessor> child) {
        return std::unique_ptr<GrFragmentProcessor>(new GrChildProcessorSampleMatrixConstantAndCoords(std::move(child)));
    }
    GrChildProcessorSampleMatrixConstantAndCoords(const GrChildProcessorSampleMatrixConstantAndCoords& src);
    std::unique_ptr<GrFragmentProcessor> clone() const override;
    const char* name() const override { return "ChildProcessorSampleMatrixConstantAndCoords"; }
private:
    GrChildProcessorSampleMatrixConstantAndCoords(std::unique_ptr<GrFragmentProcessor> child)
    : INHERITED(kGrChildProcessorSampleMatrixConstantAndCoords_ClassID, kNone_OptimizationFlags) {
        this->setUsesSampleCoordsDirectly();
        this->registerChild(std::move(child), SkSL::SampleUsage(SkSL::SampleUsage::Kind::kUniform, "float3x3(0.5)", true, true, false));    }
    GrGLSLFragmentProcessor* onCreateGLSLInstance() const override;
    void onGetGLSLProcessorKey(const GrShaderCaps&, GrProcessorKeyBuilder*) const override;
    bool onIsEqual(const GrFragmentProcessor&) const override;
#if GR_TEST_UTILS
    SkString onDumpInfo() const override;
#endif
    GR_DECLARE_FRAGMENT_PROCESSOR_TEST
    using INHERITED = GrFragmentProcessor;
};
#endif
