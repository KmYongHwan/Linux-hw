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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x444d0c5f, "snd_register_device" },
	{ 0x754d539c, "strlen" },
	{ 0xc2e79173, "snd_card_file_remove" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xaaec386f, "snd_device_initialize" },
	{ 0x86cf3d8e, "snd_ctl_register_ioctl_compat" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0xc4142837, "seq_printf" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xe5a9a51b, "snd_ctl_unregister_ioctl" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xd50f4cb9, "snd_device_new" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0x9af239ca, "snd_unregister_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xf720a60b, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa876716e, "snd_card_file_add" },
	{ 0x170680dc, "snd_ctl_register_ioctl" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb7ab7bcd, "snd_register_oss_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x101846c7, "snd_unregister_oss_device" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x66cf9a80, "snd_info_free_entry" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x60cde65, "snd_ctl_unregister_ioctl_compat" },
	{ 0x32723dd6, "snd_info_create_module_entry" },
	{ 0xce30b9d3, "snd_info_register" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "7B688A7B03FDC55C2BF0C26");
