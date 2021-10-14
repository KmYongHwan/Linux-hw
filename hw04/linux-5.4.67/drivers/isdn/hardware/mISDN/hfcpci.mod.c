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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xa42e87c8, "queue_ch_frame" },
	{ 0x454bc8a0, "dchannel_senddata" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x3f84a6c, "bchannel_senddata" },
	{ 0xf24891c4, "recv_Dchannel" },
	{ 0x3668bceb, "get_next_dframe" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8469f75a, "bchannel_get_rxbuf" },
	{ 0xc3ef53b0, "recv_Bchannel" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7fe6b58c, "create_l1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x4ef704ae, "mISDN_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xac6982f, "mISDN_initbchannel" },
	{ 0xdaa5e71f, "mISDN_initdchannel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x588886a6, "l1_event" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x576c97a7, "mISDN_freedchannel" },
	{ 0x89570c37, "mISDN_freebchannel" },
	{ 0x1cc9591c, "mISDN_unregister_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xd54709d9, "driver_for_each_device" },
	{ 0xba312d7b, "current_task" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcb1dd550, "get_next_bframe" },
	{ 0x15314fce, "consume_skb" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa5045538, "mISDN_ctrl_bchannel" },
	{ 0xf720a60b, "module_put" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xa7b2ec35, "mISDN_clear_bchannel" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mISDN_core");

MODULE_ALIAS("pci:v00001397d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d00002BD1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001043d00000675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001051d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B0d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000182Dd00003069sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4137FD3A7B850DE29FF3ABD");
