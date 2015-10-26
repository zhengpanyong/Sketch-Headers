#import "ZKArchive.h"

@interface ZKFileArchive : ZKArchive
{
    BOOL _useZip64Extensions;
}

+ (id)archiveWithArchivePath:(id)arg1;
+ (id)process:(id)arg1 usingResourceFork:(BOOL)arg2 withInvoker:(id)arg3 andDelegate:(id)arg4;
@property BOOL useZip64Extensions; // @synthesize useZip64Extensions=_useZip64Extensions;
- (id)init;
- (long long)deflateFile:(id)arg1 relativeToPath:(id)arg2 usingResourceFork:(BOOL)arg3;
- (long long)deflateDirectory:(id)arg1 relativeToPath:(id)arg2 usingResourceFork:(BOOL)arg3;
- (long long)deflateFiles:(id)arg1 relativeToPath:(id)arg2 usingResourceFork:(BOOL)arg3;
- (long long)inflateFile:(id)arg1 toDirectory:(id)arg2;
- (long long)inflateToDirectory:(id)arg1 usingResourceFork:(BOOL)arg2;
- (long long)inflateToDiskUsingResourceFork:(BOOL)arg1;

@end
