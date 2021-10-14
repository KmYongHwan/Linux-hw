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
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x575edfc, "target_unregister_template" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd301c59e, "target_register_template" },
	{ 0x754d539c, "strlen" },
	{ 0x349cba85, "strchr" },
	{ 0xa2aa570, "qlt_lport_register" },
	{ 0xcba687ee, "qlt_rdy_to_xfer" },
	{ 0x2755f89, "qlt_unreg_sess" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x9989b06a, "core_tpg_register" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x11089ac7, "_ctype" },
	{ 0xef30deac, "target_execute_cmd" },
	{ 0xecfdc954, "transport_generic_request_failure" },
	{ 0xb6a4642a, "target_remove_session" },
	{ 0x205aac5f, "target_wait_for_sess_cmds" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x14856e3a, "target_setup_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xf7afb369, "btree_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf3a94426, "qlt_xmit_response" },
	{ 0x1f786569, "target_submit_cmd" },
	{ 0x12a13bca, "target_submit_tmr" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x311906ab, "transport_generic_free_cmd" },
	{ 0x50df94f5, "btree_insert" },
	{ 0x4f2593f0, "btree_update" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xede9a09a, "btree_lookup" },
	{ 0x759bfe36, "btree_destroy" },
	{ 0x890fa0fa, "btree_get_prev" },
	{ 0xf3b95d79, "btree_remove" },
	{ 0xef92ef33, "btree_last" },
	{ 0xf331236f, "btree_geo32" },
	{ 0x999e8297, "vfree" },
	{ 0x10cf346e, "qlt_lport_deregister" },
	{ 0x312cc1ea, "target_show_dynamic_sessions" },
	{ 0xec3f8302, "target_put_sess_cmd" },
	{ 0x3a06f2cc, "qlt_free_mcmd" },
	{ 0x81a36bf8, "qlt_free_cmd" },
	{ 0x6b9b70c0, "target_sess_cmd_list_set_waiting" },
	{ 0xc49ad45f, "qlt_xmit_tm_rsp" },
	{ 0xd983dc97, "qlt_abort_cmd" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xa3130988, "scsi_host_get" },
	{ 0xd6d0503b, "fc_vport_create" },
	{ 0xa39adc65, "fc_vport_terminate" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xf14f2bdc, "core_tpg_deregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xba312d7b, "current_task" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x60560d13, "qlt_stop_phase2" },
	{ 0x568b02, "qlt_stop_phase1" },
	{ 0x7bbd6fe7, "qlt_enable_vha" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,qla2xxx,scsi_transport_fc");


MODULE_INFO(srcversion, "19474266E9F4FC8CE9B5C91");
