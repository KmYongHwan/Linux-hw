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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xb56f876f, "param_get_int" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8d2720dd, "pci_stop_and_remove_bus_device_locked" },
	{ 0x8d4d8561, "pci_get_slot" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x495e1a7b, "param_set_int" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x76da24f6, "dma_get_required_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0x6168380e, "seq_putc" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xfe31ba97, "pci_release_selected_regions" },
	{ 0xd8a909f7, "pci_request_selected_regions" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "37AABA5C5445C28B07652F3");
