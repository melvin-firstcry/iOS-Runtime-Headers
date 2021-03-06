/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsRemoteSource : MapsSuggestionsBaseSource <MapsSuggestionsSource, MapsSuggestionsSourceDelegateProxy> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _started;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MapsSuggestionsSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (unsigned long long)disposition;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (void)_closeConnection;
- (bool)_openConnectionIfNecessary;
- (void)addOrUpdateSuggestionEntriesData:(id)arg1 sourceNameData:(id)arg2 deleteMissing:(bool)arg3 completionBlock:(id /* block */)arg4;
- (bool)canProduceEntriesOfType:(unsigned long long)arg1;
- (void)dealloc;
- (void)deleteEntriesData:(id)arg1 sourceNameData:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (double)updateSuggestionEntries;

@end
