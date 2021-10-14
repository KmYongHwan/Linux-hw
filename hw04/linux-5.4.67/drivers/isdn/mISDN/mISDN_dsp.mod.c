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
	{ 0xd70f9a31, "mISDN_unregister_Bprotocol" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xd285995f, "mISDN_clock_get" },
	{ 0x785dd9f2, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x24d273d1, "add_timer" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0xf720a60b, "module_put" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5dc757dc, "mISDN_register_Bprotocol" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x66414bc7, "__class_create" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "mISDN_core");


MODULE_INFO(srcversion, "EDA301723CBB19BA6A2323A");
