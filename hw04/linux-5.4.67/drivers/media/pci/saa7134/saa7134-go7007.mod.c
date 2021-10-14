#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x460ed3e9, "saa7134_ts_unregister" },
	{ 0x6f6f27d2, "saa7134_ts_register" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xf5ff194, "go7007_parse_video_stream" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x26010d8e, "v4l2_device_register_subdev" },
	{ 0x7afb83f5, "go7007_register_encoder" },
	{ 0x5aa7a45c, "go7007_boot_encoder" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xe31b2c85, "v4l2_subdev_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0x730c4be3, "saa7134_boards" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc1042edc, "go7007_alloc" },
	{ 0x3b44f354, "go7007_read_interrupt" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a773753, "go7007_snd_remove" },
	{ 0xf421b648, "v4l2_device_put" },
	{ 0x1acd8c06, "video_unregister_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "saa7134,go7007,videodev");


MODULE_INFO(srcversion, "EDD856E2D6C960D47861F8F");
