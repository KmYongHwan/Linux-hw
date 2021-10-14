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
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf5ae1a0e, "nci_req_complete" },
	{ 0x4e70bf82, "nci_hci_set_param" },
	{ 0x30b3f115, "nci_hci_dev_session_init" },
	{ 0xe83cfdb5, "nci_recv_frame" },
	{ 0xa2721f42, "nfc_vendor_cmd_reply" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x25939a93, "nci_hci_send_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xacd356c7, "nfc_se_connectivity" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe0d430da, "nci_hci_clear_all_pipes" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8c2bf694, "nci_hci_send_event" },
	{ 0x47dee78, "skb_dequeue_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x9a46a2a0, "nci_unregister_device" },
	{ 0xd0ba29f3, "nci_nfcc_loopback" },
	{ 0xc5850110, "printk" },
	{ 0xc3028cc7, "nci_core_conn_create" },
	{ 0x1114b631, "nci_prop_cmd" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9e659a7c, "nci_hci_connect_gate" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x90d0df6b, "nfc_se_transaction" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x4ab06e02, "nci_hci_get_param" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd9332b72, "nci_nfcee_mode_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x90a3b2e9, "nfc_remove_se" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x66dd4cbf, "nfc_add_se" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3cacad8c, "__nfc_alloc_vendor_cmd_reply_skb" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf0e55155, "nci_register_device" },
	{ 0x86c5c4cc, "nci_allocate_device" },
	{ 0xe1070446, "nci_free_device" },
};

MODULE_INFO(depends, "nci,nfc");


MODULE_INFO(srcversion, "FCA1D2205882E73AD503165");
