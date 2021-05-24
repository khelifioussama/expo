package versioned.host.exp.exponent.modules.api.components.datetimepicker;

import androidx.fragment.app.DialogFragment;
import androidx.fragment.app.FragmentActivity;
import androidx.fragment.app.FragmentManager;

import com.facebook.react.bridge.Promise;

public class Common {

  public static void dismissDialog(FragmentActivity activity, String fragmentTag, Promise promise) {
    if (activity == null) {
      promise.reject(
              RNConstants.ERROR_NO_ACTIVITY,
              "Tried to close a " + fragmentTag + " dialog while not attached to an Activity");
      return;
    }

    FragmentManager fragmentManager = activity.getSupportFragmentManager();
    final DialogFragment oldFragment = (DialogFragment) fragmentManager.findFragmentByTag(fragmentTag);

    boolean fragmentFound = oldFragment != null;
    if (fragmentFound) {
      oldFragment.dismiss();
    }

    promise.resolve(fragmentFound);
  }
}
