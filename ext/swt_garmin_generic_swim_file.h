#if !defined(SWT_GARMIN_GENERIC_SWIM_FILE)
#define SWT_GARMIN_GENERIC_SWIM_FILE
#include "swt_fr920_swim_file.h"

namespace swt
{
  class GarminGenericSwimFile: public Fr920SwimFile
  {
    public:
      GarminGenericSwimFile();

    private:
      void UpdateLap(fit::LapMesg *lap);
      void UpdateSession();
  };
}
#endif

