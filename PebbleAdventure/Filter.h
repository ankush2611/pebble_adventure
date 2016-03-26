//
//  Filter.h
//  PebbleAdventure
//
//  Created by Darran Hall on 03/26/2016.
//

#import <Foundation/Foundation.h>

#define NZEROS 10
#define NPOLES 10

@interface Filter : NSObject {
	float xv[NZEROS+1], yv[NPOLES+1];
}

-(float) processValue:(float) value;

@end
