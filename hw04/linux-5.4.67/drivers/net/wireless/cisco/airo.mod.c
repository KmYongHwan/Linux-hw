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
	{ 0x3dcd2310, "iw_handler_set_thrspy" },
	{ 0x85bd1608, "__request_region" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x2f322a0c, "init_user_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x364287b0, "proc_set_user" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xa17f5f47, "crypto_alloc_sync_skcipher" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xb58cd868, "make_kgid" },
	{ 0x53874969, "wireless_spy_update" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xdd78daa8, "iw_handler_get_spy" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x163ea90b, "wireless_send_event" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x652032cb, "mac_pton" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6fc9ef9a, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x9b19ea10, "iw_handler_get_thrspy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2581e3be, "remove_proc_subtree" },
	{ 0xac1637ea, "proc_create_data" },
	{ 0xbb4f4766, "simple_write_to_buffer" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x60cc62c0, "iw_handler_set_spy" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xc84bf9c, "proc_mkdir_mode" },
	{ 0xcf2a6966, "up" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("pci:v000014B9d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00004800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00000350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d00005000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014B9d0000A504sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AA92A5E1192C2D6F0FB835D");
