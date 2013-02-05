/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, SUNavigationItem;

@interface SUDelayedNavigationItem : SUNavigationItem {
    id _delayedBackButtonTitle;
    id _delayedLeftBarButtonItems;
    NSNumber *_delayedLeftItemsSupplementBackButton;
    id _delayedRightBarButtonItems;
    id _delayedTitle;
    id _delayedTitleView;
    BOOL _shouldDelayChanges;
    SUNavigationItem *_wrappedNavigationItem;
}

@property BOOL shouldDelayChanges;
@property(retain) SUNavigationItem * wrappedNavigationItem;

- (void)_prepareButtonItemForDisplay:(id)arg1;
- (void)_scheduleCommit;
- (id)backButtonTitle;
- (void)commitDelayedChanges;
- (void)dealloc;
- (id)initWithNavigationItem:(id)arg1;
- (id)leftBarButtonItem;
- (id)leftBarButtonItems;
- (BOOL)leftItemsSupplementBackButton;
- (id)navigationBar;
- (id)rightBarButtonItem;
- (id)rightBarButtonItems;
- (void)setBackButtonTitle:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItemsSupplementBackButton:(BOOL)arg1;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setShouldDelayChanges:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleView:(id)arg1 animated:(BOOL)arg2;
- (void)setTitleView:(id)arg1;
- (void)setWrappedNavigationItem:(id)arg1;
- (BOOL)shouldDelayChanges;
- (id)title;
- (id)titleView;
- (id)wrappedNavigationItem;

@end