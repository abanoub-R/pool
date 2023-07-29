// unspoof resolution
user_pref("privacy.resistFingerprinting.letterboxing",false);

// enable drm
user_pref("media.eme.enabled",true);

// disable RFP
user_pref("privacy.resistFingerprinting", false);

// remember sign-ons
user_pref("signon.rememberSignons", true);
user_pref("network.cookie.lifetimePolicy", 0);
user_pref("signon.autofillForms", true);
user_pref("privacy.clearOnShutdown.cookies", false);
user_pref("browser.sessionstore.privacy_level", 0);

// restore home page
user_pref("browser.startup.page", 1);
user_pref("browser.startup.homepage", "about:home");
user_pref("browser.newtabpage.enabled", true);

// enable searching with url bar
user_pref("keyword.enabled", true);

// cosmetic
user_pref("widget.non-native-theme.gtk.scrollbar.round-thumb", false);

// For a chrome like cosmetic experience, enable the following prefs
// userChrome.padding.drag_space to true
// userChrome.padding.drag_space.maximized to true
// userChrome.padding.first_tab to true
// userChrome.padding.first_tab.always to true
// Then in the lepton userChrome sources, go to where it
// mentions the 1st pref i mentioned and set it to 4.
