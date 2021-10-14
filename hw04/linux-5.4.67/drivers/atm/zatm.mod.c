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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9e09a28, "uPD98402_init" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x16ce10d6, "atm_dev_deregister" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xa9e31e3e, "atm_dev_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xb870db52, "atm_charge" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15314fce, "consume_skb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x37a0cba, "kfree" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6cbbc89, "capable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uPD98402,atm");

MODULE_ALIAS("pci:v00001193d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001193d00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F794EAC11D5D62AEBB113A3");
