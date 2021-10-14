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
	{ 0x7a43b97e, "usb_gstrings_attach" },
	{ 0x71ffc019, "usb_free_all_descriptors" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0x20f9aabd, "g_audio_cleanup" },
	{ 0x880e4ee8, "u_audio_start_capture" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65309948, "usb_function_unregister" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5bda720d, "usb_ep_autoconfig" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc15cda94, "g_audio_setup" },
	{ 0x3a1144e0, "usb_function_register" },
	{ 0xf6323bf, "u_audio_stop_playback" },
	{ 0x2d5817, "u_audio_stop_capture" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x22e9ef24, "u_audio_start_playback" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xd3b0e023, "usb_assign_descriptors" },
	{ 0x83e9bef5, "usb_interface_id" },
	{ 0x656e4a6e, "snprintf" },
};

MODULE_INFO(depends, "libcomposite,udc-core,u_audio");


MODULE_INFO(srcversion, "2766C7249F10AED8DBB9A4F");
