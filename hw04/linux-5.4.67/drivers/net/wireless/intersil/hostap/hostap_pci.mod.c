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
	{ 0xaad49c42, "param_array_ops" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0x7bcc7dd1, "seq_release_private" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x13abdd5a, "hostap_dump_tx_header" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2006bd1d, "hostap_check_sta_fw_version" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x80667577, "hostap_init_ap_proc" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0xde1f6ea6, "hostap_init_proc" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x76638cf, "hostap_add_interface" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xca769fb4, "hostap_init_data" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x61963a6c, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbddfd4f7, "hostap_80211_ops" },
	{ 0xb74c47f9, "hostap_setup_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd5dcf14b, "lib80211_crypt_info_init" },
	{ 0xf75127ee, "hostap_info_init" },
	{ 0x75934c58, "hostap_set_multicast_list_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xa916b694, "strnlen" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x32960279, "hostap_get_porttype" },
	{ 0x43069814, "hostap_set_auth_algs" },
	{ 0x45fe7733, "hostap_set_roaming" },
	{ 0x317a8e64, "hostap_set_encryption" },
	{ 0xe30b0a2e, "hostap_set_string" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x49f905a1, "hostap_set_antsel" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x163ea90b, "wireless_send_event" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xba312d7b, "current_task" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2ac0e6e, "PDE_DATA" },
	{ 0xb5ff21ea, "seq_open_private" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x2748f9ff, "hostap_set_hostapd_sta" },
	{ 0x129bfbe0, "hostap_set_hostapd" },
	{ 0x15bfe716, "hostap_remove_proc" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x65ac78ef, "hostap_free_data" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x94436f75, "lib80211_crypt_info_free" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xa0672f81, "hostap_remove_interface" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8737962, "seq_write" },
	{ 0x760a0f4f, "yield" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc4142837, "seq_printf" },
	{ 0x4a210476, "prism2_update_comms_qual" },
	{ 0x6d23e715, "hostap_info_process" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fb75891, "hostap_dump_rx_header" },
	{ 0xd2bb0fe5, "hostap_80211_rx" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x15314fce, "consume_skb" },
	{ 0x77240e09, "hostap_handle_sta_tx_exc" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb18156be, "skb_pull" },
	{ 0xb4b77c8b, "hostap_80211_get_hdrlen" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xdaeab2e9, "hostap_set_word" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "hostap,lib80211");

MODULE_ALIAS("pci:v00001260d00003872sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003873sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000167Dd0000A000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "34E2C2D49DE20527B818803");
