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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x957a482d, "suni_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xa9e31e3e, "atm_dev_register" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xbdf81f69, "atm_alloc_charge" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xba312d7b, "current_task" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0x16ce10d6, "atm_dev_deregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "suni,atm");

MODULE_ALIAS("pci:v0000107Ed00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000107Ed00000009sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D518275D28631E7CE20870E");
