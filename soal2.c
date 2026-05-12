#include <stdio.h>
#include <stdlib.h>

// Fungsi Depth First Search (DFS) untuk mendeteksi siklus
int has_cycle(int node, int N, int** adj_matrix, int* visited) {
    if (visited[node] == 1) return 1; // 1 = Sedang dikunjungi. Ada siklus!
    if (visited[node] == 2) return 0; // 2 = Sudah selesai diproses dan aman.

    visited[node] = 1; // Tandai simpul ini "sedang dikunjungi" (masuk ke tumpukan proses)

    // Cek semua simpul lain yang bergantung dari simpul saat ini
    for (int i = 0; i < N; i++) {
        if (adj_matrix[node][i] == 1) { // Jika ada arah panah dari node ke i
            // Lakukan rekursi, jika ditemukan siklus di cabang ini, kembalikan 1 (True)
            if (has_cycle(i, N, adj_matrix, visited)) {
                return 1;
            }
        }
    }

    visited[node] = 2; // Tandai "selesai diproses" setelah semua cabangnya aman
    return 0; // 0 = Tidak ada siklus
}

int main() {
    int N;
    // Membaca Banyak Data
    if (scanf("%d", &N) != 1) return 0;

    // Alokasi memori dinamis untuk matriks N x N
    int** adj_matrix = (int**)malloc(N * sizeof(int*));
    int* visited = (int*)calloc(N, sizeof(int)); // Array status kunjungan, inisialisasi 0


    // Membaca relasi misi (dependensi)
    for (int i = 0; i < N; i++) {
        int a;
        scanf("%d", &a);
        return 0;
    }

    int cycle = 0;
    
    // Periksa setiap simpul, berjaga-jaga jika graph terputus (disconnected)
    for (int i = 0; i < N; i++) {
        if (visited[i] == 0) { // Jika simpul belum pernah disentuh sama sekali
            if (has_cycle(i, N, adj_matrix, visited)) {
                cycle = 1; // Siklus ditemukan!
                break;     // Hentikan pengecekan karena satu siklus saja sudah membuat jadwal gagal
            }
        }
    }

    // Mencetak hasil akhir
    if (cycle) {
        printf("Level 0:"  "%d", N); 
        printf("level 1:" "%d", N);
        printf("level 2:" "%d", N);
    }

    // Membebaskan memori yang dialokasi agar tidak terjadi memory leak
    for (int i = 0; i < N; i++) {
        free(adj_matrix[i]);
    }
    free(adj_matrix);
    free(visited);

    return 0;
}
