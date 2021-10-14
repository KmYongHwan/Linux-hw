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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4e2add, "cec_notifier_put" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x98a7ace4, "drm_hdmi_vendor_infoframe_from_display_mode" },
	{ 0x4db77591, "component_add" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xe85d5ee4, "drm_atomic_helper_connector_reset" },
	{ 0xe93628c5, "drm_bridge_attach" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x9027bc08, "drm_hdmi_avi_infoframe_quant_range" },
	{ 0x1f781d68, "drm_default_rgb_quant_range" },
	{ 0x6c2b480d, "drm_helper_probe_single_connector_modes" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x609b2853, "hdmi_infoframe_pack" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7158a176, "drm_kms_helper_hotplug_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xa5b8a17e, "drm_encoder_init" },
	{ 0xf8c99364, "cec_notifier_set_phys_addr_from_edid" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x66551bc7, "drm_detect_monitor_audio" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb80a5411, "drm_connector_cleanup" },
	{ 0x8202735c, "drm_do_get_edid" },
	{ 0x63322608, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2f8a7908, "drm_connector_update_edid_property" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd14cf43a, "drm_add_edid_modes" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x44403596, "drm_connector_init" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcc10d7f, "drm_atomic_helper_connector_destroy_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd9d6f0ca, "cec_notifier_get_conn" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xca4a37d0, "drm_connector_attach_encoder" },
	{ 0x82d84000, "drm_bridge_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc92f5b0c, "drm_encoder_cleanup" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x12d61d34, "drm_hdmi_avi_infoframe_from_display_mode" },
	{ 0x2ceef246, "component_del" },
	{ 0xa01fbb6b, "cec_notifier_set_phys_addr" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0x52e0607a, "drm_bridge_add" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3842744, "gpiod_get" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("i2c:tda998x");

MODULE_INFO(srcversion, "A000EDDB944F503BB944AED");
