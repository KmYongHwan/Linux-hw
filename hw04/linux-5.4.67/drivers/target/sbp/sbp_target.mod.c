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
	{ 0x575edfc, "target_unregister_template" },
	{ 0xd301c59e, "target_register_template" },
	{ 0x1f786569, "target_submit_cmd" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x2885fec5, "fw_get_request_speed" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x14856e3a, "target_setup_session" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xef30deac, "target_execute_cmd" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0xde006432, "sg_miter_next" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xec3f8302, "target_put_sess_cmd" },
	{ 0xf14f2bdc, "core_tpg_deregister" },
	{ 0x9989b06a, "core_tpg_register" },
	{ 0x7c08cd59, "fw_core_add_address_handler" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc0f21b2, "fw_core_remove_address_handler" },
	{ 0xb6a4642a, "target_remove_session" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe86fb5c7, "fw_card_release" },
	{ 0x3a771e39, "fw_core_add_descriptor" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbc6094c, "fw_core_remove_descriptor" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4b4db3a8, "fw_send_response" },
	{ 0x311906ab, "transport_generic_free_cmd" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc5703481, "fw_run_transaction" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x165b145c, "ex_handler_refcount" },
};

MODULE_INFO(depends, "target_core_mod,firewire-core");


MODULE_INFO(srcversion, "13D9375CF8425D91370871D");
