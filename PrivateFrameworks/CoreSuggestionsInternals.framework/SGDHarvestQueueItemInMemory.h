/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueItemInMemory : SGDHarvestQueueItem {
    BOOL  _highPriority;
    BOOL  _inProgress;
    NSString * _messageId;
    SGDHarvestQueueInMemory * _parentQueue;
    NSString * _sourceKey;
}

@property BOOL inProgress;
@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) NSString *sourceKey;

- (void).cxx_destruct;
- (id)description;
- (void)finish;
- (BOOL)highPriority;
- (BOOL)inProgress;
- (id)initWithItemId:(int)arg1 item:(id)arg2 fails:(int)arg3 sourceKey:(id)arg4 messageId:(id)arg5 highPriority:(BOOL)arg6 parentQueue:(id)arg7;
- (void)markAsFailed;
- (id)messageId;
- (void)setInProgress:(BOOL)arg1;
- (id)sourceKey;

@end