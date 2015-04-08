/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@class NGSSettingsManager, NSHashTable, NSString;

@interface BPSInternalGlanceManager : NSObject <NGSSettingsManagerDelegate> {
    NGSSettingsManager *_glanceManager;
    NSHashTable *_observers;
    BOOL _settingsAreValid;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NGSSettingsManager * glanceManager;
@property(readonly) unsigned int hash;
@property(retain) NSHashTable * observers;
@property BOOL settingsAreValid;
@property(readonly) Class superclass;

+ (id)sharedGlanceManager;

- (void).cxx_destruct;
- (void)_loadSettings;
- (void)addObserver:(id)arg1;
- (id)glanceManager;
- (id)init;
- (void)invalidateSettings;
- (void)loadSettingsIfNeeded;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSettingsAreValid:(BOOL)arg1;
- (BOOL)settingsAreValid;
- (void)settingsManagerReloadedGlances:(id)arg1;

@end