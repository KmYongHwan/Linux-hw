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
	{ 0xb18156be, "skb_pull" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xb870db52, "atm_charge" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x7a42bc96, "dev_get_by_name" },
	{ 0x3785c132, "init_net" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x957a482d, "suni_init" },
	{ 0xa9e31e3e, "atm_dev_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x15314fce, "consume_skb" },
	{ 0x16ce10d6, "atm_dev_deregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf49bc67a, "atm_pcr_goal" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm,suni");

MODULE_ALIAS("pci:v0000111Dd00000003sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4044063F4A04A579CB5412D");
