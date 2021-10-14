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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7a43b97e, "usb_gstrings_attach" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x71ffc019, "usb_free_all_descriptors" },
	{ 0x6bfad17f, "usb_ep_enable" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xe0ea2277, "filp_close" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65309948, "usb_function_unregister" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc468ff97, "usb_put_function_instance" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5bda720d, "usb_ep_autoconfig" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1484203, "config_group_init_type_name" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3a1144e0, "usb_function_register" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7ca99dbe, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x788f7546, "__snd_pcm_lib_xfer" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x283dfe3, "_snd_pcm_hw_params_any" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd3b0e023, "usb_assign_descriptors" },
	{ 0x83e9bef5, "usb_interface_id" },
	{ 0x60073153, "snd_pcm_kernel_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3ae6ee76, "filp_open" },
};

MODULE_INFO(depends, "libcomposite,udc-core,snd-pcm");


MODULE_INFO(srcversion, "A0CAED9B6C8746D0A6CBC56");
