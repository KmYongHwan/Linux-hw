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
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x9778e580, "usb_get_from_anchor" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0x9b4eab8b, "usb_find_interface" },
	{ 0x81b2f3c5, "usb_register_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0xa1bb3cd0, "usb_deregister_dev" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x7e8d8619, "usb_anchor_empty" },
	{ 0xcf2a6966, "up" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2864d614, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "764F18DDB332DB82461D438");
