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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb65720f5, "stp_proto_unregister" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa8a40b25, "dev_mc_add" },
	{ 0xece784c2, "rb_first" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc0ab6a60, "stp_proto_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf8673de, "llc_mac_hdr_init" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xa5c8e942, "dev_mc_del" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xb18156be, "skb_pull" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x37a0cba, "kfree" },
	{ 0xca9360b5, "rb_next" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x442639ef, "param_ops_uint" },
};

MODULE_INFO(depends, "stp,llc");


MODULE_INFO(srcversion, "285E0E33DBCC51625AFEEA2");
