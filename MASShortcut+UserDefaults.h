#import "MASShortcut.h"

@interface MASShortcut (UserDefaults)

+ (MASShortcut*)shortcutWithUserDefaultsKey:(NSString *)userDefaultsKey;
+ (void)registerGlobalShortcutWithUserDefaultsKey:(NSString *)userDefaultsKey handler:(void (^)())handler;
+ (void)unregisterGlobalShortcutWithUserDefaultsKey:(NSString *)userDefaultsKey;
+ (void)setGlobalShortcut:(MASShortcut *)shortcut forUserDefaultsKey:(NSString *)userDefaultsKey;

@end
