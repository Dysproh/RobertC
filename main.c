
struct Eric {
	int height;
	int schmuckiness; //Out of 10

};

task main()
{

	struct Eric eric;

	eric.height = 5;
	eric.schmuckiness = 9;
	string S;
	sprintf(S, "%i", eric.height);
	displayLCDString(0,0,S);
}
