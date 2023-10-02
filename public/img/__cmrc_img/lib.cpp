#include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace img {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to icon__32x32.png
extern const char* const f_2373_icon__32x32_png_begin;
extern const char* const f_2373_icon__32x32_png_end;
// Pointers to icon__48x48.png
extern const char* const f_e755_icon__48x48_png_begin;
extern const char* const f_e755_icon__48x48_png_end;
// Pointers to icon__64x64.png
extern const char* const f_0281_icon__64x64_png_begin;
extern const char* const f_0281_icon__64x64_png_end;
// Pointers to icon__96x96.png
extern const char* const f_4acd_icon__96x96_png_begin;
extern const char* const f_4acd_icon__96x96_png_end;
// Pointers to icon__144x144.png
extern const char* const f_67b2_icon__144x144_png_begin;
extern const char* const f_67b2_icon__144x144_png_end;
// Pointers to icon__168x168.png
extern const char* const f_718f_icon__168x168_png_begin;
extern const char* const f_718f_icon__168x168_png_end;
// Pointers to icon__256x256.png
extern const char* const f_222e_icon__256x256_png_begin;
extern const char* const f_222e_icon__256x256_png_end;
// Pointers to icon__512x512.png
extern const char* const f_8232_icon__512x512_png_begin;
extern const char* const f_8232_icon__512x512_png_end;
}

namespace {

const cmrc::detail::index_type&
get_root_index() {
    static cmrc::detail::directory root_directory_;
    static cmrc::detail::file_or_directory root_directory_fod{root_directory_};
    static cmrc::detail::index_type root_index;
    root_index.emplace("", &root_directory_fod);
    struct dir_inl {
        class cmrc::detail::directory& directory;
    };
    dir_inl root_directory_dir{root_directory_};
    (void)root_directory_dir;

    root_index.emplace(
        "icon__32x32.png",
        root_directory_dir.directory.add_file(
            "icon__32x32.png",
            res_chars::f_2373_icon__32x32_png_begin,
            res_chars::f_2373_icon__32x32_png_end
        )
    );
    root_index.emplace(
        "icon__48x48.png",
        root_directory_dir.directory.add_file(
            "icon__48x48.png",
            res_chars::f_e755_icon__48x48_png_begin,
            res_chars::f_e755_icon__48x48_png_end
        )
    );
    root_index.emplace(
        "icon__64x64.png",
        root_directory_dir.directory.add_file(
            "icon__64x64.png",
            res_chars::f_0281_icon__64x64_png_begin,
            res_chars::f_0281_icon__64x64_png_end
        )
    );
    root_index.emplace(
        "icon__96x96.png",
        root_directory_dir.directory.add_file(
            "icon__96x96.png",
            res_chars::f_4acd_icon__96x96_png_begin,
            res_chars::f_4acd_icon__96x96_png_end
        )
    );
    root_index.emplace(
        "icon__144x144.png",
        root_directory_dir.directory.add_file(
            "icon__144x144.png",
            res_chars::f_67b2_icon__144x144_png_begin,
            res_chars::f_67b2_icon__144x144_png_end
        )
    );
    root_index.emplace(
        "icon__168x168.png",
        root_directory_dir.directory.add_file(
            "icon__168x168.png",
            res_chars::f_718f_icon__168x168_png_begin,
            res_chars::f_718f_icon__168x168_png_end
        )
    );
    root_index.emplace(
        "icon__256x256.png",
        root_directory_dir.directory.add_file(
            "icon__256x256.png",
            res_chars::f_222e_icon__256x256_png_begin,
            res_chars::f_222e_icon__256x256_png_end
        )
    );
    root_index.emplace(
        "icon__512x512.png",
        root_directory_dir.directory.add_file(
            "icon__512x512.png",
            res_chars::f_8232_icon__512x512_png_begin,
            res_chars::f_8232_icon__512x512_png_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // img
} // cmrc
