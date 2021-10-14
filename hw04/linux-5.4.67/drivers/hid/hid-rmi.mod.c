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
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x6c7cbf19, "rmi_driver_resume" },
	{ 0xbd253f4c, "hid_hw_close" },
	{ 0x6626afca, "down" },
	{ 0xc87daf8d, "rmi_register_transport_device" },
	{ 0xcf2a6966, "up" },
	{ 0xa68a7b33, "hid_hw_open" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x4102e10e, "rmi_set_attn_data" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xc9328139, "irq_create_mapping" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x89d0d600, "__irq_domain_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xab75265c, "irq_set_chip_and_handler_name" },
	{ 0xa5dc54da, "dummy_irq_chip" },
	{ 0x75c0bf03, "handle_simple_irq" },
	{ 0x96ee549f, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x88a1a04c, "irq_find_mapping" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xae38b920, "rmi_unregister_transport_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5ada0011, "input_event" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x14ef3897, "rmi_driver_suspend" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,rmi_core");

MODULE_ALIAS("hid:b0003g*v00001532p0000011D");
MODULE_ALIAS("hid:b0003g*v000017EFp00006085");
MODULE_ALIAS("hid:b0003g*v00000461p00004E72");
MODULE_ALIAS("hid:b0003g*v000006CBp000081A7");
MODULE_ALIAS("hid:b*g0100v*p*");

MODULE_INFO(srcversion, "EC8BC8BAB0A7A9FD965F6EB");
