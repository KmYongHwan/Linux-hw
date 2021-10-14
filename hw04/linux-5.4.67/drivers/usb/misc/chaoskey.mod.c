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
	{ 0xdefbea52, "default_llseek" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3d61149f, "usb_enable_autosuspend" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x81b2f3c5, "usb_register_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8d14b8b, "usb_get_intf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x31e0547e, "usb_poison_urb" },
	{ 0xa1bb3cd0, "usb_deregister_dev" },
	{ 0x90cb6031, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3c24030c, "usb_autopm_put_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xc576c069, "usb_autopm_get_interface" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xba312d7b, "current_task" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9b4eab8b, "usb_find_interface" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1D50p60C6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D8p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "271F57C654BB0269D87CE55");
