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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xee928537, "iio_device_release_direct_mode" },
	{ 0xe81c21aa, "iio_device_claim_direct_mode" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x9f35521e, "dln2_register_event_cb" },
	{ 0x3f8ad58c, "devm_iio_triggered_buffer_setup" },
	{ 0x17a4c5e3, "iio_trigger_set_immutable" },
	{ 0x67a59418, "__devm_iio_trigger_register" },
	{ 0x10d9ad4, "devm_iio_trigger_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xfdb49257, "iio_triggered_buffer_postenable" },
	{ 0x99b13df1, "iio_triggered_buffer_predisable" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6fc554c9, "iio_trigger_notify_done" },
	{ 0xf6ffcfd0, "iio_push_to_buffers" },
	{ 0x932664f1, "iio_get_time_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x94ee1f58, "dln2_transfer" },
	{ 0x28c70ba4, "iio_trigger_poll" },
	{ 0xfbc555fe, "dln2_unregister_event_cb" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,dln2,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "2738D141CC5D16E6876F7A8");
