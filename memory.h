struct data {
    int data;
    char type[10];
};
struct Audio {
    int data;
    char name[10];
    struct Audio *next_audio;
};
struct particle {
    int data;
    char name[10];
    struct particle *next_particle;
};


struct memory_cell {
    struct data mcd;
    struct Audio *right;
    struct particle *left;
}*M1;
Memory_Init();
