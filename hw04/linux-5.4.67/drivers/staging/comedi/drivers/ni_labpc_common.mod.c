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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x27fbb5a5, "comedi_alloc_devpriv" },
	{ 0x7ba6c7be, "labpc_drain_dma" },
	{ 0x9219beeb, "comedi_8254_cascade_ns_to_timer" },
	{ 0xc961c821, "comedi_alloc_subdev_readback" },
	{ 0x35ad3c35, "comedi_8254_load" },
	{ 0x590c9f82, "comedi_timeout" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x336c5a37, "comedi_8254_set_mode" },
	{ 0x548b84ec, "comedi_buf_write_samples" },
	{ 0x4ad52cc5, "labpc_setup_dma" },
	{ 0xe6ec9b7a, "comedi_8254_update_divisors" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xacdf2b63, "labpc_handle_dma_status" },
	{ 0x60a0537f, "subdev_8255_mm_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5f916ef7, "comedi_8254_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd6530855, "comedi_8254_write" },
	{ 0x37a0cba, "kfree" },
	{ 0xaedaec7e, "comedi_8254_mm_init" },
	{ 0xc2ea1e21, "subdev_8255_init" },
	{ 0xa236be2f, "comedi_handle_events" },
	{ 0x76c6e165, "comedi_alloc_subdevices" },
};

MODULE_INFO(depends, "comedi,ni_labpc_isadma,comedi_8254,comedi_8255");


MODULE_INFO(srcversion, "CE3196CE7BE4B35EB688A89");
