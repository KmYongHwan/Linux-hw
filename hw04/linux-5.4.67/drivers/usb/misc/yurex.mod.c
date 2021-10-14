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
	{ 0x31e0547e, "usb_poison_urb" },
	{ 0xa1bb3cd0, "usb_deregister_dev" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x81b2f3c5, "usb_register_dev" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x8d14b8b, "usb_get_intf" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x61b7b126, "simple_strtoull" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xba312d7b, "current_task" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x9b4eab8b, "usb_find_interface" },
	{ 0x2864d614, "fasync_helper" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x90cb6031, "usb_put_intf" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0C45p1010d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8DA70FE4A07D500139BFD5D");
