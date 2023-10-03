        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace icons {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to w_icon__196x128.png
extern const char* const f_f0c3_w_icon__196x128_png_begin;
extern const char* const f_f0c3_w_icon__196x128_png_end;
// Pointers to w_icon__384x256.png
extern const char* const f_02de_w_icon__384x256_png_begin;
extern const char* const f_02de_w_icon__384x256_png_end;
// Pointers to w_icon__768x512.png
extern const char* const f_1786_w_icon__768x512_png_begin;
extern const char* const f_1786_w_icon__768x512_png_end;
// Pointers to w_icon__1024x768.png
extern const char* const f_f0ce_w_icon__1024x768_png_begin;
extern const char* const f_f0ce_w_icon__1024x768_png_end;
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
        "w_icon__196x128.png",
        root_directory_dir.directory.add_file(
            "w_icon__196x128.png",
            res_chars::f_f0c3_w_icon__196x128_png_begin,
            res_chars::f_f0c3_w_icon__196x128_png_end
        )
    );
    root_index.emplace(
        "w_icon__384x256.png",
        root_directory_dir.directory.add_file(
            "w_icon__384x256.png",
            res_chars::f_02de_w_icon__384x256_png_begin,
            res_chars::f_02de_w_icon__384x256_png_end
        )
    );
    root_index.emplace(
        "w_icon__768x512.png",
        root_directory_dir.directory.add_file(
            "w_icon__768x512.png",
            res_chars::f_1786_w_icon__768x512_png_begin,
            res_chars::f_1786_w_icon__768x512_png_end
        )
    );
    root_index.emplace(
        "w_icon__1024x768.png",
        root_directory_dir.directory.add_file(
            "w_icon__1024x768.png",
            res_chars::f_f0ce_w_icon__1024x768_png_begin,
            res_chars::f_f0ce_w_icon__1024x768_png_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // icons
} // cmrc
    