#ifndef __LFO_H__
#define __LFO_H__

#include <lv2plugin.hpp>

using namespace LV2;

class LFO : public Plugin<finalpass>
{
    typedef unsigned int uint;

    protected:

        float mFrequency;
        int   mForm;
        float mModulation;
        float mDeviation;

    public:

        enum waveforms = 
        {
            "SINE": 0,
            "TRIANGLE",
            "SAW",
            "QUAD"
        }

    // -----------------------------------------
    // - Method declarations
    // - Accessors:
    // -------------------------------------------

         void setFrequency(float f);
         void setForm(uint index);
         void setModulation(float duration);
         void setDeviation(float deviation);

        float getFrequencey();
        uint  getForm();
        float getModulation();
        float getDeviation();
}

#endif /* __LFO_H__ */