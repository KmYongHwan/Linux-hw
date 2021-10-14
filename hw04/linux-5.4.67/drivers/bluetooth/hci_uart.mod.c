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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x93f3fa6c, "hci_recv_diag" },
	{ 0xdc6699cb, "acpi_dev_free_resource_list" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8b6e69a6, "regulator_set_voltage" },
	{ 0x815588a6, "clk_enable" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xb74f842f, "debugfs_create_u8" },
	{ 0xf7e2d4ee, "__hci_cmd_sync" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaa310c74, "btintel_enter_mfg" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0x214e4265, "bt_warn" },
	{ 0xb1a71b27, "qca_set_bdaddr" },
	{ 0xade4637f, "hci_register_dev" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x33067b0d, "qca_set_bdaddr_rome" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xb2d5c970, "btbcm_patchram" },
	{ 0x6adc7c14, "acpi_dev_get_property" },
	{ 0xaa0f9cf1, "btbcm_check_bdaddr" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x959d1f91, "hci_reset_dev" },
	{ 0xbe58e8ca, "tty_unthrottle" },
	{ 0x293b77df, "btbcm_set_bdaddr" },
	{ 0xea45ba20, "__percpu_down_read" },
	{ 0x5641485b, "tty_termios_encode_baud_rate" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xe3e9bf89, "devm_gpiod_get" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xfb916bca, "serdev_device_close" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{  0x94515, "qca_read_soc_version" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfbd10329, "hci_recv_frame" },
	{ 0xf1ebe9a5, "desc_to_gpio" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xfaf08463, "hci_unregister_dev" },
	{ 0x2895148f, "__hci_cmd_sync_ev" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x11a30855, "serdev_device_write_buf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xa7c32b0d, "btintel_read_boot_params" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x718b8b7, "bt_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc61a4fa4, "serdev_device_set_tiocm" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xbd0538b4, "qca_uart_setup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x1113c204, "__serdev_device_driver_register" },
	{ 0x2f9dd375, "serdev_device_wait_until_sent" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe1dcb55f, "__percpu_init_rwsem" },
	{ 0x925f403c, "tty_ldisc_flush" },
	{ 0x9a2cc37a, "btintel_set_event_mask_mfg" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xc0b7c903, "debugfs_create_u64" },
	{ 0x421bd017, "n_tty_ioctl_helper" },
	{ 0x4f4a34d8, "btintel_load_ddc_config" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd0f037bf, "hci_alloc_dev" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc7f4bf6d, "serdev_device_get_tiocm" },
	{ 0x828c42cc, "serdev_device_write_flush" },
	{ 0x2d52deaf, "devm_clk_put" },
	{ 0xb18156be, "skb_pull" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x66023a3a, "debugfs_create_bool" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x50b9de98, "devm_acpi_dev_add_driver_gpios" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xafc3f886, "regulator_set_load" },
	{ 0xcd6c5d9a, "percpu_up_write" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x837a48c7, "device_wakeup_disable" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0xf720a60b, "module_put" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x8b149c36, "clk_is_match" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x99e7f29c, "btintel_set_diag" },
	{ 0x64daa48b, "btintel_exit_mfg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x9d2b1e54, "tty_driver_flush_buffer" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0x7ea19302, "put_device" },
	{ 0x99052454, "btrtl_get_uart_settings" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x3048d52f, "device_reprobe" },
	{ 0xaf78f260, "btrtl_free" },
	{ 0xd8605fc2, "acpi_dev_get_resources" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xf34a280e, "serdev_device_set_parity" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15f41ace, "btintel_set_bdaddr" },
	{ 0x963cf8c8, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x9415ca79, "__module_get" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x57398834, "btintel_version_info" },
	{ 0x556cca46, "x86_apple_machine" },
	{ 0x3ef161f8, "serdev_device_open" },
	{ 0x6296ca70, "qca_send_pre_shutdown_cmd" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9b14871, "btintel_read_version" },
	{ 0x214809fb, "__percpu_up_read" },
	{ 0x69acdf38, "memcpy" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x578a5481, "btrtl_initialize" },
	{ 0x8d205528, "serdev_device_set_flow_control" },
	{ 0x2e51b82f, "btbcm_initialize" },
	{ 0xefce1de2, "btintel_download_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xf04680a5, "nvmem_cell_get" },
	{ 0x984f562, "btintel_send_intel_reset" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xcfc78046, "btrtl_download_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbc384997, "btbcm_finalize" },
	{ 0x4c636abf, "btintel_check_bdaddr" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x1b4777, "hci_free_dev" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xcf1ab585, "serdev_device_set_baudrate" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xaa01c190, "tty_register_ldisc" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x4cdb4ece, "percpu_down_write" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1c437023, "device_set_wakeup_capable" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xede283d, "release_firmware" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x2cd164c6, "tty_set_termios" },
	{ 0x8a59702, "percpu_free_rwsem" },
};

MODULE_INFO(depends, "bluetooth,btintel,btqca,btbcm,btrtl");

MODULE_ALIAS("acpi*:BCM2E00:*");
MODULE_ALIAS("acpi*:BCM2E01:*");
MODULE_ALIAS("acpi*:BCM2E02:*");
MODULE_ALIAS("acpi*:BCM2E03:*");
MODULE_ALIAS("acpi*:BCM2E04:*");
MODULE_ALIAS("acpi*:BCM2E05:*");
MODULE_ALIAS("acpi*:BCM2E06:*");
MODULE_ALIAS("acpi*:BCM2E07:*");
MODULE_ALIAS("acpi*:BCM2E08:*");
MODULE_ALIAS("acpi*:BCM2E09:*");
MODULE_ALIAS("acpi*:BCM2E0A:*");
MODULE_ALIAS("acpi*:BCM2E0B:*");
MODULE_ALIAS("acpi*:BCM2E0C:*");
MODULE_ALIAS("acpi*:BCM2E0D:*");
MODULE_ALIAS("acpi*:BCM2E0E:*");
MODULE_ALIAS("acpi*:BCM2E0F:*");
MODULE_ALIAS("acpi*:BCM2E10:*");
MODULE_ALIAS("acpi*:BCM2E11:*");
MODULE_ALIAS("acpi*:BCM2E12:*");
MODULE_ALIAS("acpi*:BCM2E13:*");
MODULE_ALIAS("acpi*:BCM2E14:*");
MODULE_ALIAS("acpi*:BCM2E15:*");
MODULE_ALIAS("acpi*:BCM2E16:*");
MODULE_ALIAS("acpi*:BCM2E17:*");
MODULE_ALIAS("acpi*:BCM2E18:*");
MODULE_ALIAS("acpi*:BCM2E19:*");
MODULE_ALIAS("acpi*:BCM2E1A:*");
MODULE_ALIAS("acpi*:BCM2E1B:*");
MODULE_ALIAS("acpi*:BCM2E1C:*");
MODULE_ALIAS("acpi*:BCM2E1D:*");
MODULE_ALIAS("acpi*:BCM2E1F:*");
MODULE_ALIAS("acpi*:BCM2E20:*");
MODULE_ALIAS("acpi*:BCM2E21:*");
MODULE_ALIAS("acpi*:BCM2E22:*");
MODULE_ALIAS("acpi*:BCM2E23:*");
MODULE_ALIAS("acpi*:BCM2E24:*");
MODULE_ALIAS("acpi*:BCM2E25:*");
MODULE_ALIAS("acpi*:BCM2E26:*");
MODULE_ALIAS("acpi*:BCM2E27:*");
MODULE_ALIAS("acpi*:BCM2E28:*");
MODULE_ALIAS("acpi*:BCM2E29:*");
MODULE_ALIAS("acpi*:BCM2E2A:*");
MODULE_ALIAS("acpi*:BCM2E2B:*");
MODULE_ALIAS("acpi*:BCM2E2C:*");
MODULE_ALIAS("acpi*:BCM2E2D:*");
MODULE_ALIAS("acpi*:BCM2E2E:*");
MODULE_ALIAS("acpi*:BCM2E2F:*");
MODULE_ALIAS("acpi*:BCM2E30:*");
MODULE_ALIAS("acpi*:BCM2E31:*");
MODULE_ALIAS("acpi*:BCM2E32:*");
MODULE_ALIAS("acpi*:BCM2E33:*");
MODULE_ALIAS("acpi*:BCM2E34:*");
MODULE_ALIAS("acpi*:BCM2E35:*");
MODULE_ALIAS("acpi*:BCM2E36:*");
MODULE_ALIAS("acpi*:BCM2E37:*");
MODULE_ALIAS("acpi*:BCM2E38:*");
MODULE_ALIAS("acpi*:BCM2E39:*");
MODULE_ALIAS("acpi*:BCM2E3A:*");
MODULE_ALIAS("acpi*:BCM2E3B:*");
MODULE_ALIAS("acpi*:BCM2E3C:*");
MODULE_ALIAS("acpi*:BCM2E3D:*");
MODULE_ALIAS("acpi*:BCM2E3E:*");
MODULE_ALIAS("acpi*:BCM2E3F:*");
MODULE_ALIAS("acpi*:BCM2E40:*");
MODULE_ALIAS("acpi*:BCM2E41:*");
MODULE_ALIAS("acpi*:BCM2E42:*");
MODULE_ALIAS("acpi*:BCM2E43:*");
MODULE_ALIAS("acpi*:BCM2E44:*");
MODULE_ALIAS("acpi*:BCM2E45:*");
MODULE_ALIAS("acpi*:BCM2E46:*");
MODULE_ALIAS("acpi*:BCM2E47:*");
MODULE_ALIAS("acpi*:BCM2E48:*");
MODULE_ALIAS("acpi*:BCM2E49:*");
MODULE_ALIAS("acpi*:BCM2E4A:*");
MODULE_ALIAS("acpi*:BCM2E4B:*");
MODULE_ALIAS("acpi*:BCM2E4C:*");
MODULE_ALIAS("acpi*:BCM2E4D:*");
MODULE_ALIAS("acpi*:BCM2E4E:*");
MODULE_ALIAS("acpi*:BCM2E4F:*");
MODULE_ALIAS("acpi*:BCM2E50:*");
MODULE_ALIAS("acpi*:BCM2E51:*");
MODULE_ALIAS("acpi*:BCM2E52:*");
MODULE_ALIAS("acpi*:BCM2E53:*");
MODULE_ALIAS("acpi*:BCM2E54:*");
MODULE_ALIAS("acpi*:BCM2E55:*");
MODULE_ALIAS("acpi*:BCM2E56:*");
MODULE_ALIAS("acpi*:BCM2E57:*");
MODULE_ALIAS("acpi*:BCM2E58:*");
MODULE_ALIAS("acpi*:BCM2E59:*");
MODULE_ALIAS("acpi*:BCM2E5A:*");
MODULE_ALIAS("acpi*:BCM2E5B:*");
MODULE_ALIAS("acpi*:BCM2E5C:*");
MODULE_ALIAS("acpi*:BCM2E5D:*");
MODULE_ALIAS("acpi*:BCM2E5E:*");
MODULE_ALIAS("acpi*:BCM2E5F:*");
MODULE_ALIAS("acpi*:BCM2E60:*");
MODULE_ALIAS("acpi*:BCM2E61:*");
MODULE_ALIAS("acpi*:BCM2E62:*");
MODULE_ALIAS("acpi*:BCM2E63:*");
MODULE_ALIAS("acpi*:BCM2E64:*");
MODULE_ALIAS("acpi*:BCM2E65:*");
MODULE_ALIAS("acpi*:BCM2E66:*");
MODULE_ALIAS("acpi*:BCM2E67:*");
MODULE_ALIAS("acpi*:BCM2E68:*");
MODULE_ALIAS("acpi*:BCM2E69:*");
MODULE_ALIAS("acpi*:BCM2E6B:*");
MODULE_ALIAS("acpi*:BCM2E6D:*");
MODULE_ALIAS("acpi*:BCM2E6E:*");
MODULE_ALIAS("acpi*:BCM2E6F:*");
MODULE_ALIAS("acpi*:BCM2E70:*");
MODULE_ALIAS("acpi*:BCM2E71:*");
MODULE_ALIAS("acpi*:BCM2E72:*");
MODULE_ALIAS("acpi*:BCM2E73:*");
MODULE_ALIAS("acpi*:BCM2E74:*");
MODULE_ALIAS("acpi*:BCM2E75:*");
MODULE_ALIAS("acpi*:BCM2E76:*");
MODULE_ALIAS("acpi*:BCM2E77:*");
MODULE_ALIAS("acpi*:BCM2E78:*");
MODULE_ALIAS("acpi*:BCM2E79:*");
MODULE_ALIAS("acpi*:BCM2E7A:*");
MODULE_ALIAS("acpi*:BCM2E7B:*");
MODULE_ALIAS("acpi*:BCM2E7C:*");
MODULE_ALIAS("acpi*:BCM2E7D:*");
MODULE_ALIAS("acpi*:BCM2E7E:*");
MODULE_ALIAS("acpi*:BCM2E7F:*");
MODULE_ALIAS("acpi*:BCM2E80:*");
MODULE_ALIAS("acpi*:BCM2E81:*");
MODULE_ALIAS("acpi*:BCM2E82:*");
MODULE_ALIAS("acpi*:BCM2E83:*");
MODULE_ALIAS("acpi*:BCM2E84:*");
MODULE_ALIAS("acpi*:BCM2E85:*");
MODULE_ALIAS("acpi*:BCM2E86:*");
MODULE_ALIAS("acpi*:BCM2E87:*");
MODULE_ALIAS("acpi*:BCM2E88:*");
MODULE_ALIAS("acpi*:BCM2E89:*");
MODULE_ALIAS("acpi*:BCM2E8A:*");
MODULE_ALIAS("acpi*:BCM2E8B:*");
MODULE_ALIAS("acpi*:BCM2E8C:*");
MODULE_ALIAS("acpi*:BCM2E8D:*");
MODULE_ALIAS("acpi*:BCM2E8E:*");
MODULE_ALIAS("acpi*:BCM2E90:*");
MODULE_ALIAS("acpi*:BCM2E92:*");
MODULE_ALIAS("acpi*:BCM2E93:*");
MODULE_ALIAS("acpi*:BCM2E94:*");
MODULE_ALIAS("acpi*:BCM2E95:*");
MODULE_ALIAS("acpi*:BCM2E96:*");
MODULE_ALIAS("acpi*:BCM2E97:*");
MODULE_ALIAS("acpi*:BCM2E98:*");
MODULE_ALIAS("acpi*:BCM2E99:*");
MODULE_ALIAS("acpi*:BCM2E9A:*");
MODULE_ALIAS("acpi*:BCM2E9B:*");
MODULE_ALIAS("acpi*:BCM2E9C:*");
MODULE_ALIAS("acpi*:BCM2E9D:*");
MODULE_ALIAS("acpi*:BCM2EA0:*");
MODULE_ALIAS("acpi*:BCM2EA1:*");
MODULE_ALIAS("acpi*:BCM2EA2:*");
MODULE_ALIAS("acpi*:BCM2EA3:*");
MODULE_ALIAS("acpi*:BCM2EA4:*");
MODULE_ALIAS("acpi*:BCM2EA5:*");
MODULE_ALIAS("acpi*:BCM2EA6:*");
MODULE_ALIAS("acpi*:BCM2EA7:*");
MODULE_ALIAS("acpi*:BCM2EA8:*");
MODULE_ALIAS("acpi*:BCM2EA9:*");
MODULE_ALIAS("acpi*:BCM2EAA:*");
MODULE_ALIAS("acpi*:BCM2EAB:*");
MODULE_ALIAS("acpi*:BCM2EAC:*");
MODULE_ALIAS("acpi*:INT33E1:*");
MODULE_ALIAS("acpi*:OBDA8723:*");
MODULE_ALIAS("of:N*T*Cti,cc2560");
MODULE_ALIAS("of:N*T*Cti,cc2560C*");
MODULE_ALIAS("of:N*T*Cti,wl1271-st");
MODULE_ALIAS("of:N*T*Cti,wl1271-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1273-st");
MODULE_ALIAS("of:N*T*Cti,wl1273-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1281-st");
MODULE_ALIAS("of:N*T*Cti,wl1281-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1283-st");
MODULE_ALIAS("of:N*T*Cti,wl1283-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1285-st");
MODULE_ALIAS("of:N*T*Cti,wl1285-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1801-st");
MODULE_ALIAS("of:N*T*Cti,wl1801-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1805-st");
MODULE_ALIAS("of:N*T*Cti,wl1805-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1807-st");
MODULE_ALIAS("of:N*T*Cti,wl1807-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1831-st");
MODULE_ALIAS("of:N*T*Cti,wl1831-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1835-st");
MODULE_ALIAS("of:N*T*Cti,wl1835-stC*");
MODULE_ALIAS("of:N*T*Cti,wl1837-st");
MODULE_ALIAS("of:N*T*Cti,wl1837-stC*");
MODULE_ALIAS("of:N*T*Cqcom,qca6174-bt");
MODULE_ALIAS("of:N*T*Cqcom,qca6174-btC*");
MODULE_ALIAS("of:N*T*Cqcom,wcn3990-bt");
MODULE_ALIAS("of:N*T*Cqcom,wcn3990-btC*");
MODULE_ALIAS("of:N*T*Cqcom,wcn3998-bt");
MODULE_ALIAS("of:N*T*Cqcom,wcn3998-btC*");

MODULE_INFO(srcversion, "A6EA770F18195052BE27337");
