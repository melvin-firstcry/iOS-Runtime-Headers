/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MLTrack, NSDictionary;



@interface MPMediaServerItem : NSObject <NSCoding>
{
    MLTrack *_track;
    NSDictionary *_commonProperties;
}

@property(readonly) MLTrack *MLTrack;
@property(readonly) NSDictionary *commonProperties;


- (id)initWithMLTrack:(id)arg1;
- (id)initWithMLTrack:(id)arg1 prefetchProperties:(BOOL)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)MLTrack;
- (id)commonProperties;
- (id)globalID;
- (id)mediaType;
- (id)title;
- (id)albumTitle;
- (id)artist;
- (id)albumArtist;
- (id)genre;
- (id)composer;
- (id)playbackDuration;
- (id)albumTrackNumber;
- (id)albumTrackCount;
- (id)discNumber;
- (id)discCount;
- (id)artwork;
- (id)lyrics;
- (id)isCompilation;
- (id)year;
- (id)bpm;
- (id)comments;
- (id)grouping;
- (id)artworkDataForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)podcastTitle;
- (id)seriesName;
- (id)seasonNumber;
- (id)episodeNumber;
- (id)playCount;
- (id)skipCount;
- (id)rating;
- (id)lastPlayedDate;

@end