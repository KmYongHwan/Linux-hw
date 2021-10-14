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
	{ 0xf888ca21, "sg_init_table" },
	{ 0xc2a5d34d, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x7b4081ac, "crypto_stats_ahash_update" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa8d2e0e, "iscsi_requeue_task" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf587fb54, "crypto_ahash_final" },
	{ 0x1d9a01e5, "iscsi_itt_to_ctask" },
	{ 0x5d3ce2e, "crypto_ahash_digest" },
	{ 0x3e0f1413, "skb_abort_seq_read" },
	{ 0xba312d7b, "current_task" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3874c6e3, "skb_prepare_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xc8b1390d, "iscsi_conn_teardown" },
	{ 0xb677120e, "iscsi_put_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6aa22caa, "iscsi_prep_data_out_pdu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7f428602, "iscsi_complete_pdu" },
	{ 0x6bfe9d3d, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x69acdf38, "memcpy" },
	{ 0x601f5fcd, "iscsi_dbg_trace" },
	{ 0x4feeb97c, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x74ca4843, "crypto_stats_get" },
	{ 0x47867762, "__tracepoint_iscsi_dbg_tcp" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0x38130737, "iscsi_verify_itt" },
	{ 0x3ff435ff, "iscsi_conn_setup" },
	{ 0x9eaa33d3, "iscsi_update_cmdsn" },
};

MODULE_INFO(depends, "libiscsi,scsi_transport_iscsi");


MODULE_INFO(srcversion, "0C30DB850B236759F2A0AB3");
