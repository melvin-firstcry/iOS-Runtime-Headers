/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@class FMFHandle, NSArray, NSMutableDictionary, NSString, UIAlertView;

@interface FMFLocationSharingViewController : PSListController <FMFSessionDelegateInternal> {
    void *_addressBook;
    NSArray *_allFollowersHandles;
    NSMutableDictionary *_dsidToFamilyPhoto;
    NSArray *_familyMembers;
    NSArray *_familySpecifiers;
    NSArray *_followersHandles;
    NSArray *_followersSpecifiers;
    UIAlertView *_genericErrorAlert;
    NSArray *_hashedFamilyDsids;
    FMFHandle *_lastSelectedHandle;
    bool_isMyLocationEnabled;
    bool_useFamilyCirclePhotos;
    bool_useFamilyCirclePhotosLoaded;
}

@property void* addressBook;
@property(retain) NSArray * allFollowersHandles;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSMutableDictionary * dsidToFamilyPhoto;
@property(retain) NSArray * familyMembers;
@property(retain) NSArray * familySpecifiers;
@property(retain) NSArray * followersHandles;
@property(retain) NSArray * followersSpecifiers;
@property(retain) UIAlertView * genericErrorAlert;
@property(readonly) unsigned long long hash;
@property(retain) NSArray * hashedFamilyDsids;
@property bool isMyLocationEnabled;
@property(retain) FMFHandle * lastSelectedHandle;
@property(readonly) Class superclass;
@property bool useFamilyCirclePhotos;
@property bool useFamilyCirclePhotosLoaded;

- (void).cxx_destruct;
- (id)_followerHandleWithHashedDSID:(id)arg1;
- (bool)_isFamilyMemberAFollower:(id)arg1;
- (bool)_isHandleAFollower:(id)arg1;
- (void)_loadFamilyMemberPhotos;
- (void)_loadFamilyMembers:(bool)arg1;
- (void)_meDeviceSpecifierWasTapped:(id)arg1;
- (void)_pushAddressBookUIForHandle:(id)arg1;
- (void)_setShareSwitchEnabled:(id)arg1 forSpecifier:(id)arg2;
- (id)_shareSwitchEnabled:(id)arg1;
- (void)_showFamilyMemberDetails:(id)arg1;
- (void)_showHandleDetails:(id)arg1;
- (id)_specifierForFamilyMember:(id)arg1;
- (id)_specifierForHandle:(id)arg1;
- (void)abChanged:(id)arg1;
- (void)addRemoveActionToPersonViewController:(id)arg1;
- (void)addShareActionToPersonViewController:(id)arg1;
- (void*)addressBook;
- (id)allFollowersHandles;
- (id)allHandlesMatchingABCardForSelectedHandle:(id)arg1;
- (void)dealloc;
- (void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveServerError:(id)arg1;
- (void)didStartSharingMyLocationWithHandle:(id)arg1;
- (void)didStopSharingMyLocationWithHandle:(id)arg1;
- (void)didUpdateActiveDeviceList:(id)arg1;
- (void)didUpdateHidingStatus:(bool)arg1;
- (void)displayGenericErrorAlert;
- (id)dsidToFamilyPhoto;
- (id)familyMembers;
- (id)familySpecifiers;
- (id)followersHandles;
- (id)followersSpecifiers;
- (id)formatStringForHours:(long long)arg1 minutes:(long long)arg2;
- (id)genericErrorAlert;
- (id)hashedFamilyDsids;
- (int)identifierOfProperty:(int)arg1 withHandleId:(id)arg2 forRecord:(void*)arg3;
- (bool)isMyLocationEnabled;
- (id)lastSelectedHandle;
- (id)monogramForHandle:(id)arg1;
- (void)networkReachabilityUpdated:(bool)arg1;
- (bool)noMeDeviceSelected:(id)arg1;
- (id)offerTimeRemaining:(double)arg1;
- (bool)phoneNumberMatches:(id)arg1 phone2:(id)arg2;
- (void*)recordForHandle:(id)arg1;
- (void)reloadSpecifiersOnMainQueue;
- (void)removeFollower:(id)arg1;
- (id)reverseString:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllFollowersHandles:(id)arg1;
- (void)setDsidToFamilyPhoto:(id)arg1;
- (void)setFamilyMembers:(id)arg1;
- (void)setFamilySpecifiers:(id)arg1;
- (void)setFollowersHandles:(id)arg1;
- (void)setFollowersSpecifiers:(id)arg1;
- (void)setGenericErrorAlert:(id)arg1;
- (void)setHashedFamilyDsids:(id)arg1;
- (void)setIsMyLocationEnabled:(bool)arg1;
- (void)setLastSelectedHandle:(id)arg1;
- (void)setUseFamilyCirclePhotos:(bool)arg1;
- (void)setUseFamilyCirclePhotosLoaded:(bool)arg1;
- (void)shareMyLocation:(id)arg1;
- (id)sortedFollowersWithCombinedRecords:(id)arg1;
- (id)specifiers;
- (id)stringByKeepingCharacterSet:(id)arg1 inString:(id)arg2;
- (void*)unknownRecordForData:(id)arg1 property:(int)arg2;
- (bool)useFamilyCirclePhotos;
- (bool)useFamilyCirclePhotosLoaded;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end