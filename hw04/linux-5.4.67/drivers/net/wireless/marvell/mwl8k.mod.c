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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x919dade8, "device_release_driver" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd1a4581, "ieee80211_restart_hw" },
	{ 0x1b80b66a, "ieee80211_start_tx_ba_session" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xa8baf7a6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x7e30f9b0, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x839b0f4c, "ieee80211_stop_tx_ba_session" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x15314fce, "consume_skb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x12950e37, "skb_copy" },
	{ 0x5d6a04c4, "ieee80211_rx_irqsafe" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3e6aa32d, "ieee80211_find_sta_by_ifaddr" },
	{ 0xb18156be, "skb_pull" },
	{ 0x22a17cbd, "ieee80211_tx_status_irqsafe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xba312d7b, "current_task" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe7fba065, "ieee80211_queue_work" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x29361773, "complete" },
	{ 0xe484e35f, "ioread32" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0x71deb539, "request_firmware" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0e602eb, "memmove" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xede283d, "release_firmware" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("pci:v000011ABd00002A0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B36sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0D71873E88E508A648C88DC");
