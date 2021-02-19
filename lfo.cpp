//b----------------------------------------
// - Declare an output model with a Low Freq Oscillatior,
// - That modulates a phaser 
// - The modulated phaser is summed in the input signal,
// - So the output should be quite interesing
//b----------------------------------------

#include "lfo.h";

class LFO : public plugin<finalpass>
{
    // -------------------------------
    // - Method realizations
    // -------------------------------

    public: 

    void LFO::setFrequency(float frequency)
    {
        this.mFrequency = frequency;
    }

    void LFO::setForm(uint index)
    {
        this.mForm = waveforms[index];
    }

    void LFO::setModulation(float frequency)
    {
        this.mModulation = frequency;
    }

    void LFO::setDeviation(float deviation)
    {
        this.mDeviation = deviation;
    }

    // --------------------------------------
    //  Getters....
    // ---------------------------------------

    float LFO::getFrequency()
    {
        return this.mFrequency;
    }

    uint LFO::getForm()
    {
        return this.mForm;
    }
    
    float LFO::getModulation()
    {
        return this.mModulation;
    }

    float LFO::getDeviation()
    {
        return this.mDeviation;
    }

}