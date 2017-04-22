#ifndef INC_DICTIONARY_H
#define INC_DICTIONARY_H
#include<string>
#include<set>
#include<fstream>
class Dictionary {
	public:
		Dictionary( const std::string & fname ){
			std::ifstream wlist( fname.c_str() );
			if( !wlist.is_open()){
				//report open error
			}
			std::string word;
			while (std::getline( wlist, word )){
				mWords.insert(word);
			}
			if(!wlist.eof()){
				//report read error
			}
		}
		bool Check( const std::string & word ) const {
			return mWords.find(word) != mWords.end();
		}
	private:
		std::set <std::string> mWords;
};
#endif
